#include <stdio.h>

#define arr_size1	255
#define arr_size2	3




char array[arr_size1][arr_size2];
int generalCase(int num);
int greekUpperM(int num);
int greekLowerM(int num);
int greekUpperN(int num);
int greekLowerN(int num);
void print_character(int num);
int main(void){
int c , boh8;

/*antistixish ellhnikwn-agglikwn xarakthrwn*/
array[168][0]=34; /*dialutika*/
array[180][0]=39; /*tonos*/
array[181][0]=39; array[181][1]=34;
array[182][0]=39; array[182][1]=65;
array[184][0]=39; array[184][1]=69;
array[185][0]=39; array[185][1]=72;
array[186][0]=39; array[186][1]=73;
array[188][0]=39; array[188][1]=79;
array[190][0]=39; array[190][1]=89;
array[191][0]=39; array[191][1]=87;
array[192][0]=105;array[192][1]=34; array[192][2]=39;

array[193][0]=65;
array[194][0]=86;
array[195][0]=71;
array[196][0]=68;
array[197][0]=69;
array[198][0]=90;
array[199][0]=72;
array[200][0]=56;
array[201][0]=73;
array[202][0]=75;
array[203][0]=76;
array[204][0]=77;
array[205][0]=78;
array[206][0]=75; array[206][1]=83;
array[207][0]=79;
array[208][0]=80;
array[209][0]=82;
array[211][0]=83;
array[212][0]=84;
array[213][0]=89;
array[214][0]=70;
array[215][0]=88;
array[216][0]=80; array[216][1]=83;
array[217][0]=87;
array[218][0]=34; array[218][1]=73;
array[219][0]=34; array[219][1]=89;

array[220][0]=97; array[220][1]=39;
array[221][0]=101; array[221][1]=39;
array[222][0]=104; array[222][1]=39;
array[223][0]=105; array[223][1]=39;
array[224][0]=121; array[224][1]=34; array[224][2]=39;

array[225][0]=97;
array[226][0]=118;
array[227][0]=103;
array[228][0]=100;
array[229][0]=101;
array[230][0]=122;
array[231][0]=104;
array[232][0]=56;
array[233][0]=105;
array[234][0]=107;
array[235][0]=108;
array[236][0]=109;
array[237][0]=110;
array[238][0]=107; array[238][1]=115;
array[239][0]=111;
array[240][0]=112;
array[241][0]=114;
array[242][0]=115;
array[243][0]=115;
array[244][0]=116;
array[245][0]=121;
array[246][0]=102;
array[247][0]=120;
array[248][0]=112; array[248][1]=115;
array[249][0]=119;
array[250][0]=105; array[250][1]=34;
array[251][0]=121; array[251][1]=34;
array[252][0]=111; array[252][1]=39;
array[253][0]=121; array[253][1]=39;
array[254][0]=119; array[254][1]=39;
boh8=0;
while( (c =getchar()) != EOF){
 if(boh8==0){
   /*general case*/
   boh8= generalCase(c); 	
 }else if(boh8 == 1){
   /*case greek upper m*/
   boh8= greekUpperM(c);
 }else if(boh8== 2){
   /*case greek lower m*/
   boh8= greekLowerM(c);
 }else if(boh8== 3){
   /*case greek upper n*/
   boh8= greekUpperN(c);
 }else {
   /*case greek lower n*/
   boh8= greekLowerN(c);
 }


}

return 0;
}


int generalCase(int num){
/*case greek upper m*/
 if(num==204)
   return 1;
/*case greek lower m*/
 else if(num==236)
   return 2;
/*case greek upper n*/
 else if(num==205)
   return 3;
/*case greek lower n*/
 else if(num==237)
   return 4;
/*general case -- print character*/
 else{
  print_character(num);
  return 0;
 }
}

int greekUpperM(int num){
if(num == 204){
  putchar(78);
  return 1;
}else if(num ==236){
  putchar(78);
  return 2;
}else if(num ==205){
  putchar(78);
  return 3;
}else if(num==237){
  putchar(78);
  return 4;
}else if(num==208){
  putchar(66);
  return 0;
}else if(num==240){
  putchar(66);
  return 0;
}else{
 putchar(78);
 print_character(num);
 return 0;
}
}


int greekLowerM(int num){
if(num == 204){
  putchar(109);
  return 1;
}else if(num ==236){
  putchar(109);
  return 2;
}else if(num ==205){
  putchar(109);
  return 3;
}else if(num==237){
  putchar(109);
  return 4;
}else if(num==208){
  putchar(98);
  return 0;
}else if(num==240){
  putchar(98);
  return 0;
}else{
 putchar(109);
 print_character(num);
 return 0;
}
}


int greekUpperN(int num){
if(num == 204){
  putchar(79);
  return 1;
}else if(num ==236){
  putchar(79);
  return 2;
}else if(num ==205){
  putchar(79);
  return 3;
}else if(num==237){
  putchar(79);
  return 4;
}else if(num==212){
  putchar(68);
  return 0;
}else if(num==244){
  putchar(68);
  return 0;
}else{
 putchar(79);
 print_character(num);
 return 0;
}
}


int greekLowerN(int num){
if(num == 204){
  putchar(110);
  return 1;
}else if(num ==236){
  putchar(110);
  return 2;
}else if(num ==205){
  putchar(110);
  return 3;
}else if(num==237){
  putchar(110);
  return 4;
}else if(num==212){
  putchar(100);
  return 0;
}else if(num==244){
  putchar(100);
  return 0;
}else{
 putchar(110);
 print_character(num);
 return 0;
}


}
void print_character(int num){
  int i=0;
  /*an den exoume orisei ton xarakthra ektupwse ton antistoixo tou*/
  if(array[num][i]== '\0')
    putchar(num);
  else{
    while(array[num][i] != '\0' && i<3){
	putchar(array[num][i]);
        i++;
    }
  }

}

