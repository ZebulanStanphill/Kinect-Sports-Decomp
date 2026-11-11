typedef struct {char pad[0xd4]; unsigned short count;} Data_8304D6F0;
typedef struct {char pad[8]; Data_8304D6F0 *data; char padc[0x14]; unsigned a,b;} Obj_8304D6F0;
extern void fn_8304D5A0(unsigned,unsigned,unsigned,unsigned short,unsigned *,unsigned short *);
void fn_8304D6F0(Obj_8304D6F0 *o,unsigned a,unsigned *b,unsigned short *c) {fn_8304D5A0(a,o->a,o->b,o->data->count,b,c);}
