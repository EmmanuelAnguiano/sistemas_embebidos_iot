#define TIEMPO_TAREA_1 5000
#define TIEMPO_TAREA_2 1000
#define TIEMPO_TAREA_3 3000
#define TIEMPO_TAREA_4 7000
#define TIEMPO_TAREA_5 10000

class millis_tasks{
  public:
   uint64_t tiempo_anterior1=0,
            tiempo_anterior2=0,
            tiempo_anterior3=0,
            tiempo_anterior4=0,
            tiempo_anterior5=0,
            tiempo_actual=0;

  public:

    void tarea1(void);
    void tarea2(void);
    void tarea3(void);
    void tarea4(void);
    void tarea5(void);
    void actualizar_tareas(void);
};

void millis_tasks :: actualizar_tareas(void){
  tiempo_actual = millis ( ); 
}

void millis_tasks :: tarea1(void){
  if ( tiempo_actual - tiempo_anterior1 >= TIEMPO_TAREA_1 ) {
    
    tiempo_anterior1 = tiempo_actual;
    Serial.println ( "Tarea 1" );
    
  }
}

void millis_tasks :: tarea2(void){
  if ( tiempo_actual - tiempo_anterior2 >= TIEMPO_TAREA_2 ) {
    
    tiempo_anterior2 = tiempo_actual;
    Serial.println ( "Tarea 2" );
    
  }
}

void millis_tasks :: tarea3(void){
  if ( tiempo_actual - tiempo_anterior3 >= TIEMPO_TAREA_3 ) {
    
    tiempo_anterior3 = tiempo_actual;
    Serial.println ( "Tarea 3" );
    
  }
}

void millis_tasks :: tarea4(void){
  if ( tiempo_actual - tiempo_anterior4 >= TIEMPO_TAREA_4 ) {
    
    tiempo_anterior4 = tiempo_actual;
    Serial.println ( "Tarea 4" );
    
  }
}

void millis_tasks :: tarea5(void){
  if ( tiempo_actual - tiempo_anterior5 >= TIEMPO_TAREA_5 ) {
    
    tiempo_anterior5 = tiempo_actual;
    Serial.println ( "Tarea 5" );
    
  }
}