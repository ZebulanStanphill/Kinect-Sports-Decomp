unsigned short fn_82294B38(int self,unsigned short ch) {
 int p=**(int **)(self+0x20);
 if (p!=0 && (unsigned)p>**(unsigned **)(self+0x10) &&
 (ch==0xffff || ch==*(unsigned short *)(p-2) || (*(unsigned *)(self+0x40)&2)==0)) {
 ++**(int **)(self+0x30);
 **(int **)(self+0x20)-=2;
 if (ch!=0xffff) *(unsigned short *)**(int **)(self+0x20)=ch;
 return ch!=0xffff ? ch : 0;
 }
 return -1;
}