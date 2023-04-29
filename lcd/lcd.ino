#include <Wire.h>               /*~ Librería I2C ~*/
#include <LiquidCrystal_I2C.h>  /*~ Librería LCD ~*/

/*~ Página para crear iconos personalizados ~*/
/*~ https://maxpromer.github.io/LCD-Character-Creator/ ~*/
/*~ Los siguientes arrays contienen un caracter, es decir se indica que pixel se enciendo o apaga dependiendo si es 1 o 0 ~*/
/*~ Icono o caracter 1 ~*/
byte caracter1 [ ] = {
  B11111,							/*~ ⬜⬛⬛⬛⬜~*/
  B01110,							/*~ ⬜⬛⬜⬛⬜~*/
  B00100,							/*~ ⬜⬛⬛⬛⬜~*/
  B01110,							/*~ ⬛⬛⬛⬛⬛~*/
  B11111,							/*~ ⬜⬜⬛⬜⬜~*/
  B01110,						    /*~ ⬜⬜⬛⬜⬜~*/
  B00100,							/*~ ⬜⬛⬛⬛⬜~*/
  B01110							/*~ ⬛⬜⬜⬜⬛~*/
};

/*~ Icono o caracter 2 ~*/
byte caracter2 [ ] = {
  B11111,							/*~ ⬛⬛⬛⬛⬛~*/
  B10001,							/*~ ⬛⬜⬜⬜⬛~*/
  B10001,							/*~ ⬛⬜⬜⬜⬛~*/
  B11111,							/*~ ⬛⬛⬛⬛⬛~*/
  B11111,							/*~ ⬛⬛⬛⬛⬛~*/
  B11111,							/*~ ⬛⬛⬛⬛⬛~*/
  B11111,							/*~ ⬛⬛⬛⬛⬛~*/
  B11011							/*~ ⬛⬛⬜⬛⬛~*/
};

 
LiquidCrystal_I2C lcd ( 0x27, 16, 2 );  /*~ Instancia de la clase para el manejo de la pantalla ( Dirección I2C, columnas, filas ) ~*/

void setup ( void ) {
  
  lcd.init ( ); 					 	/*~ Inicializar la pantalla LCD ~*/
  
  lcd.createChar ( 0, caracter1 );   	/*~ Indicar al programa que genere un caracter a partir del array de bits. ~*/
  lcd.createChar ( 1, caracter2 );   	/*~ Indicar al programa que genere otro un caracter. ~*/
  
}

void loop ( void ) {
  
  lcd.backlight ( );     		/*~ Encender la luz de fondo. ~*/
  	delay ( 1000 );      		/*~ Esperar 1 segundo. ~*/
  
  lcd.noBacklight ( );   		/*~ Apagar la luz de fondo. ~*/
  	delay ( 1000 );      		/*~ Esperar 1 segundo. ~*/
  lcd.backlight ( );     		/*~ Encender la luz de fondo. ~*/
  
   
   lcd.setCursor ( 0, 0 );   	/*~ ( columnas, filas) Ubicamos el cursor en la primera posición(columna:0) de la primera línea(fila:0) ~*/
   lcd.write ( 0 );		  		/*~ Mostramos nuestro primer icono o caracter ~*/
   	delay ( 1000 );				/*~ Esperar 1 segundo ~*/
   lcd.clear ( );				/*~ Limpiar pantalla ~*/
   lcd.setCursor ( 0, 1 );   	/*~ ( columnas, filas) Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1) ~*/
   lcd.write ( 1 );          	/*~ Mostramos nuestro segundo icono o caracter ~*/
    delay ( 1000 );				/*~ Esperar 1 segundo ~*/
   lcd.clear ( );				/*~ Limpiar pantalla ~*/
  
   lcd.setCursor ( 0, 0 );   	/*~ ( columnas, filas) Ubicamos el cursor en la primera posición(columna:0) de la primera línea(fila:0) ~*/
   lcd.print ( "Emmanuel" ); /*~ Mostrar una cadena de texto (no exceder 16 caracteres por línea)~*/
   delay ( 1000 );				/*~ Esperar 1 segundo ~*/   			
  	
  for ( uint8_t i = 0; i < ( 40 ); i++ ) {  /*~ Este ciclo es para que se vea como se recorren los caracteres, si no es colocado se vería muy rápido ~*/
    
    lcd.scrollDisplayRight ( ); /*~ Recorrer caracteres de derecha a izquierda ~*/
    delay ( 100 );				/*~ Esperar 100 milisegundos ~*/
    
  }
  
  for ( uint8_t i = 0; i < ( 40 ); i++ ) {  /*~ Este ciclo es para que se vea como se recorren los caracteres, si no es colocado se vería muy rápido ~*/
    
    lcd.scrollDisplayLeft ( ); /*~ Recorrer caracteres de izquierda a derecha ~*/
    delay ( 100 );				/*~ Esperar 100 milisegundos ~*/
    
  }
  
  lcd.clear ( );				/*~ Limpiar pantalla ~*/
  
  
}
