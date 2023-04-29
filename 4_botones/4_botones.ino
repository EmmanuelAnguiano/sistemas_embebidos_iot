bool push1;//definir boleano para push1
bool push2;//definir boleano para push2
bool push3;//definir boleano para push3
bool push4;//definir boleano para push4

class emmanuel{//crear clase
  public://tipo publica
    void anguiano();//crear metodo
};


void emmanuel::anguiano(){//llamar a mi clase con su funcion
  if(push1)//comparar boleano
    Serial.println("boton 1 presionado");//impresion en consola
  if(push2)//comparar boleano
    Serial.println("boton 2 presionado");//impresion en consola
  if(push3)//comparar boleano
    Serial.println("boton 3 presionado");//impresion en consola
  if(push4)//comparar boleano
    Serial.println("boton 4 presionado");//impresion en consola
  delay(200);//delay de 200 milisegundos
}

emmanuel panchito;//creacion de objeto

  
#define btn1 8
#define btn2 9
#define btn3 10
#define btn4 11
//declaracion de botones en sus puertos

void setup()
{
  pinMode(btn1, INPUT);//declarar boton como entrada
  pinMode(btn2, INPUT);//declarar boton como entrada
  pinMode(btn3, INPUT);//declarar boton como entrada
  pinMode(btn4, INPUT);//declarar boton como entrada
  Serial.begin(9600);//baudrate de 115200
}

void loop()
{
  push1=digitalRead(btn1);//igualar el boleano al boton de entrada
  push2=digitalRead(btn2);//igualar el boleano al boton de entrada
  push3=digitalRead(btn3);//igualar el boleano al boton de entrada
  push4=digitalRead(btn4);//igualar el boleano al boton de entrada
  
 panchito.anguiano();//llamar el objeto con metodo
}
