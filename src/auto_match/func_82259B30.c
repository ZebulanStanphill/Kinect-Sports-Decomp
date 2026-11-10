void fn_82259B30(int object, long long value)
{
 float first; int second;
 int *base=(int *)(object+0x50), *receiver;
 receiver=(int *)base[6];
 (*(void (**)(int *,long long,float *))(*(int *)receiver+0x14))(receiver,value,&first);
 receiver=(int *)base[8];
 (*(void (**)(int *,long long,int *))(*(int *)receiver+0x14))(receiver,value,&second);
 if (*(int **)(base+4)!=0) {
  (*(void (**)(int *,float,int))(*(int *)*(int **)(base+4)+4))(*(int **)(base+4),first,second);
 }
}
