extern float fn_83005BE8(int);
extern float fn_82FFFC20(int);
float fn_830008B0(int self) {
 float value=fn_83005BE8(self);
 if(*(unsigned *)(self+0x68)!=0) value=fn_82FFFC20(*(unsigned *)(self+0x68)+0x24)+value;
 return value;
}
