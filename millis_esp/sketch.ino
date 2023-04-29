#include "tareas.h"
millis_tasks tsk;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("se a iniciado las tareas");
}

void loop() {
  tsk.actualizar_tareas();
  tsk.tarea1();
  tsk.tarea2();
  tsk.tarea3();
  tsk.tarea4();
  tsk.tarea5();
}
