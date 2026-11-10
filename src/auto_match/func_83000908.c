extern float fn_83005C68(int);
extern float fn_82FFFC20(int);
float fn_83000908(int self) {
 float value=fn_83005C68(self);
 if(*(unsigned *)(self+0x68)!=0) value=fn_82FFFC20(*(unsigned *)(self+0x68)+0x2c)+value;
 return value;
}
