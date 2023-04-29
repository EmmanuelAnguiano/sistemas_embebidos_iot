#define TIEMPO_TAREA_1 5000
#define TIEMPO_TAREA_2 1000
#define TIEMPO_TAREA_3 3000
#define TIEMPO_TAREA_4 7000
#define TIEMPO_TAREA_5 10000

uint64_t tiempoActual = 0,
		 tiempoTranscurrido_tarea1 = 0,
		 tiempoTranscurrido_tarea2 = 0,
		 tiempoTranscurrido_tarea3 = 0,
		 tiempoTranscurrido_tarea4 = 0,
		 tiempoTranscurrido_tarea5 = 0;

void tarea1 ( void ){
  
  if ( tiempoActual - tiempoTranscurrido_tarea1 >= TIEMPO_TAREA_1 ) {
    
    tiempoTranscurrido_tarea1 = tiempoActual;
    Serial.println ( "Tarea 1" );
    
  }
  
}

void tarea2 ( void ){
  
  if ( tiempoActual - tiempoTranscurrido_tarea2 >= TIEMPO_TAREA_2 ) {
    
    tiempoTranscurrido_tarea2 = tiempoActual;
    Serial.println ( "Tarea 2" );
    
  }
  
}

void tarea3 ( void ){
  
  if ( tiempoActual - tiempoTranscurrido_tarea3 >= TIEMPO_TAREA_3 ) {
    
    tiempoTranscurrido_tarea3 = tiempoActual;
    Serial.println ( "Tarea 3" );
    
  }
  
}

void tarea4 ( void ){
  
  if ( tiempoActual - tiempoTranscurrido_tarea4 >= TIEMPO_TAREA_4 ) {
    
    tiempoTranscurrido_tarea4 = tiempoActual;
    Serial.println ( "Tarea 4" );
    
  }
  
}

void tarea5 ( void ){
  
  if ( tiempoActual - tiempoTranscurrido_tarea5 >= TIEMPO_TAREA_5 ) {
    
    tiempoTranscurrido_tarea5 = tiempoActual;
    Serial.println ( "Tarea 5" );
    
  }
  
}

void setup ( void ) {
  
  Serial.begin ( 115200 );
  
}

void loop ( void ) {
  
  // Millis() retorna la cantidad de milisegundos que han pasado desde que se inició elprograma.
  tiempoActual = millis ( );   
  tarea1 ( );
  tarea2 ( );
  tarea3 ( );
  tarea4 ( );
  tarea5 ( );
  
}

