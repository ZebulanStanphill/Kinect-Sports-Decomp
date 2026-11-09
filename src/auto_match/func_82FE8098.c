typedef struct { unsigned short type, size; unsigned value, first, second; unsigned char reserved[32]; } Message_82FE8098;
extern unsigned fn_8300F1C8(void);
extern void fn_8300F208(unsigned,Message_82FE8098 *,unsigned short);
extern unsigned lbl_832642E4;
void fn_82FE8098(unsigned char flag, float value) {
 Message_82FE8098 m; unsigned short id; union { float f; unsigned u; } bits;
 m.first=flag; bits.f = value; m.size=0x1d; m.value=bits.u;
 id=fn_8300F1C8(); fn_8300F208(lbl_832642E4,&m,id);
}
