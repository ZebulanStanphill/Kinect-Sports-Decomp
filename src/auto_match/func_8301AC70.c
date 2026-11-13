static __forceinline int *find_8301AC70(int base,unsigned key) {
    int *node=*(int **)(base+(key%193+10)*4);
    for (;node;node=(int *)*node) {
        if ((unsigned)node[1]==key) return node+2;
    }
    return 0;
}
unsigned fn_8301AC70(int base,unsigned key,float value) {
    int *item=find_8301AC70(base,key);
    if (!item) return 2;
    *(float *)(*item+0x54)=value;
    return 1;
}
