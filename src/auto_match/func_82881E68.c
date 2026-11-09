typedef struct Map_82881E68 { int unused; char *head; } Map_82881E68;
extern Map_82881E68 lbl_83212A00;
extern void fn_8289F160(char **,Map_82881E68 *,int *);
void fn_82881E68(int id, unsigned *p) {
 int key=id;
 char *it,*v;
 fn_8289F160(&it,&lbl_83212A00,&key);
 if (it!=lbl_83212A00.head) v=*(char **)(it+0x10); else v=0;
 *(unsigned short *)(v+0x24)=2;
 *(unsigned *)(v+0x28)=*p;
 *(unsigned short *)(v+0x26)=1000;
}
