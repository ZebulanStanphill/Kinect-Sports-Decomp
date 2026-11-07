typedef struct Entry_82FF72A8 { unsigned key; unsigned value; } Entry_82FF72A8;
typedef struct Item_82FF72A8 { unsigned key, value[3]; } Item_82FF72A8;
typedef struct Map_82FF72A8 { unsigned pad; Entry_82FF72A8 *begin,*end; } Map_82FF72A8;
typedef struct Sub_82FF72A8 { Item_82FF72A8 *begin,*end; } Sub_82FF72A8;
extern char *lbl_832642E0;
extern unsigned *fn_83016110(void *,unsigned,unsigned);
extern void fn_82FF6678(void *,unsigned,unsigned);
extern unsigned *fn_82FF8068(void *,unsigned);
extern void fn_8302AE30(void *,unsigned);
extern unsigned fn_82FF6520(void *,unsigned);
extern void fn_82FE85A0(unsigned,unsigned);
typedef void (*Release_82FF72A8)(void *);
static __forceinline unsigned *find_82FF72A8(Map_82FF72A8 *map,unsigned key) {
    unsigned char found;
    Entry_82FF72A8 *it;
    for (it=map->begin;it!=map->end;it++) if (it->key==key) break;
    found=it!=map->end;
    return found ? &it->value : 0;
}
static __forceinline unsigned *findsub_82FF72A8(Sub_82FF72A8 *map,unsigned key) {
    unsigned char found;
    Item_82FF72A8 *it;
    for (it=map->begin;it!=map->end;it++) if (it->key==key) break;
    found=it!=map->end;
    return found ? it->value : 0;
}
unsigned fn_82FF72A8(Map_82FF72A8 *self,unsigned key,unsigned subkey,unsigned arg) {
    unsigned *obj,*outer,*slot;
    if (!subkey) return 0xe;
    obj=fn_83016110(lbl_832642E0+0x328,key,arg);
    if (!obj) return 0x10;
    outer=find_82FF72A8(self,key);
    if ((int)findsub_82FF72A8((Sub_82FF72A8 *)(*outer+0x10),subkey)) fn_82FF6678(self,key,subkey);
    slot=fn_82FF8068((void *)(*outer+0x10),subkey);
    if (slot) {
        slot[0]=(unsigned)obj;
        slot[1]=arg;
        ((unsigned char *)slot)[8] &= 0x7f;
        fn_8302AE30(obj,0);
        if (fn_82FF6520(self,key)==subkey) fn_82FE85A0(key,subkey);
        return 1;
    }
    (*(Release_82FF72A8 *)(*obj+8))(obj);
    return 2;
}
