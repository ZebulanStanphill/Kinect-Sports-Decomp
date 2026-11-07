typedef int (*Method_83007088)();
typedef struct Callback_83007088 {
 int *object;
 unsigned int context;
 unsigned char flag : 1;
 unsigned char other : 7;
 unsigned char pad[3];
} Callback_83007088;
extern unsigned int lbl_832642E0;
extern int *fn_82FAB9C0(unsigned int,unsigned int);
extern unsigned char fn_830069B8(int *);
extern unsigned int fn_83008158(unsigned int,unsigned int,Callback_83007088);
extern void fn_8302AE30(int *,int *);
unsigned int fn_83007088(int *self,unsigned int context,unsigned int target) {
 int *object;
 Callback_83007088 callback;
 if (!target) return 14;
 object = fn_82FAB9C0(lbl_832642E0+0x350,context);
 if (!object) return 16;
 (*(Method_83007088 *)(*self+0xd8))(self,target);
 callback.object = object;
 callback.context = context;
 callback.flag = 0;
 if (fn_830069B8(self) && fn_83008158(self[8]+0x24,target,callback)) {
   fn_8302AE30(object,self);
   (*(Method_83007088 *)(*self+0xdc))(self);
   return 1;
 }
 (*(Method_83007088 *)(*object+8))(object);
 return 2;
}
