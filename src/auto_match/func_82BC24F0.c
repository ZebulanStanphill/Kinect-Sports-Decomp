typedef struct {char pad[0x30];int index;} Item;
typedef struct {void *(*fn)(int,void *);int pad;} Entry;
extern Item lbl_8316FF50[];extern Entry lbl_820E3A58[];
void *fn_82BC24F0(int index,void *context){return lbl_820E3A58[lbl_8316FF50[index].index].fn(index,context);}
