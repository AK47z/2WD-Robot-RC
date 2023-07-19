 int s[5][4] ={{1,0,1,0},
 {0,0,0,0},
 {1,0,0,0},
 {0,0,1,0},
 {0,1,0,1}};
int n[4]= {2,3,4,5};
void setup()
{pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(A0,OUTPUT);
 pinMode(A1,OUTPUT);
 Serial.begin(9600);
digitalWrite(2,0);
 digitalWrite(4,0);
 digitalWrite(3,0);
 digitalWrite(5,0);
  analogWrite(A0,255);
  analogWrite(A1,255);

}

void loop()
{

if (Serial.available())
{switch (Serial.read())
{case 'F':
 for(int i=0;i<=3;i++){digitalWrite(n[i],s[0][i]);}
 break;
 
 
 case 'S':
   for(int i=0;i<=3;i++){digitalWrite(n[i],s[1][i]);}
 break;
 
 case 'R' :
    for(int i=0;i<=3;i++){digitalWrite(n[i],s[2][i]);}
  
 break;
 
 case 'L':
 for(int i=0;i<=3;i++){digitalWrite(n[i],s[3][i]);}
break;
 case 'B':
  for(int i=0;i<=3;i++){digitalWrite(n[i],s[4][i]);}

 break;
 default:
Serial.println("error");



}
  
  
}
  
  
  
}
