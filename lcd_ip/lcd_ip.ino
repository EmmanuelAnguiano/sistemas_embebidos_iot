#include <Wire.h> /*~ Librería I2C ~*/              
#define BUFFER_I2C 127       /*~ Cantidad de direcciones que puede almacenar (7 bits) ~*/

byte error = 0,              /*~ Almacena el valor que retorna la función endTransmission(~*/
	 dispositivos = 0;       /*~ Indica cuandos dispositivos se han encontrado. ~*/ 


void setup( void ) {	
  
  Wire.begin ( ); 	         /*~ Inicialización protocolo I2C. ~*/
 
  Serial.begin ( 9600 );	 /*~ Configurar puerto serial a 9600 bits por segundo. ~*/
  while ( !Serial );         /*~ Esperar a que la consola sea abierta por el usuario. ~*/
  Serial.println ( "Programa para escanear direcciones I2C" );
  
}


 
 
void loop ( void ) {
 
  Serial.println("Escaneando direciones...");
 
  dispositivos = 0;
  for ( byte direcciones = 1; direcciones < BUFFER_I2C; direcciones++ )  {

    Wire.beginTransmission ( direcciones );  /*~ Transmite un mensaje para verificar respuesta. ~*/
    error = Wire.endTransmission ( );        /*~ Si la comunicación termina sin errores, quiere decir que se encontró un dispositivo en esa dirección. ~*/
 
    if ( error == 0 )	{ /*~ Si no hay error quiere decir que se eonctró un dispositivo. ~*/
      
      Serial.print ( "Eureka, dispositivo encontrado en la direccion: 0x" );
      if ( direcciones < 16 )
        Serial.print ( "0" );
      Serial.println ( direcciones, HEX );
      dispositivos++;
      
    }
    
    else if ( error == 4 )	{
      
      Serial.print ( "Error desconocido en la dirección 0x" );
      if ( direcciones < 16 )
        Serial.print ( "0" );
      Serial.println ( direcciones, HEX );
    }    
    
  }
  
  if ( dispositivos == 0 )			/*~ Si no se detectó ningún dispositivo en la lista de direcciones. ~*/
    Serial.println ( "No se encontraron dispositivos, revisa conexiones." );
  else
    Serial.println ( "Listo, fue un placer" );
 
  delay ( 5000 );		/*~ Escanear cada 5 segundos ~*/
  
}