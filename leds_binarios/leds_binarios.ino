bool push1;//definir boleano para push1
bool push2;//definir boleano para push2
int count = 0;//define contador en 0

#define btn1 8
#define btn2 9
#define led1 13
#define led2 12
#define led3 11
#define led4 10
//definir leds y botones con sus puertos

class emmanuel{//crear clase
  public://tipo publica
    void anguiano();//crear metodo
};


void emmanuel::anguiano(){//llamar a mi clase con su funcion
  if(push1 == 1){//comparar boleano
     count++;
    delay(200);
    digitalWrite(led1, HIGH);//1
      if(count==2){//2
       digitalWrite(led1, LOW);
       digitalWrite(led2, HIGH);
      }if(count==3){//3
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
      }if(count==4){//4
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
      }if(count==5){//5
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
      }if(count==6){//6
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
      }if(count==7){//7
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
      }if(count==8){//8
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
      }if(count==9){//9
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
      }
  }

  if(push2){
    for(count=count;count>=0;count--){
    if(count==2){//2
       digitalWrite(led1, LOW);
       digitalWrite(led2, HIGH);
       digitalWrite(led3, LOW);
       digitalWrite(led4, LOW);
      }
      delay(200);
        if(count==3){//3
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
      }
      delay(200);
        if(count==4){//4
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
    }
      delay(200);
        if(count==5){//5
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      }
      delay(200);
        if(count==6){//6
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
      }
      delay(200);
        if(count==7){//7
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
      }
      delay(200);
        if(count==1){//1
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
      }
      delay(200);
        if(count==8){//8
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
      }
      delay(200);
        if(count==0){//8
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
      }
    }
  }
}


emmanuel panchito;//creacion de objeto

void setup()
{
  pinMode(btn1, INPUT);//declarar boton como entrada
  pinMode(btn2, INPUT);//declarar boton como entrada
  pinMode(led1, OUTPUT);//declara led como salida
  pinMode(led2, OUTPUT);//declara led como salida
  pinMode(led3, OUTPUT);//declara led como salida
  pinMode(led4, OUTPUT);//declara led como salida
  Serial.begin(115200);//baudrate de 115200
}

void loop()
{
  push1=digitalRead(btn1);//igualar el boleano al boton de entrada
  push2=digitalRead(btn2);//igualar el boleano al boton de entrada
 
 panchito.anguiano();//llamar el objeto con metodo
}
