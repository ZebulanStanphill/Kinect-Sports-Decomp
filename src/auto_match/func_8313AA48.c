typedef struct Local_8313AA48 {char data[16]; int zero;} Local_8313AA48;
extern int fn_828A1D58(void);
extern void fn_828C03E8(int,void *);
extern void fn_822315A0(void *);
extern void fn_824C0330(void *);
extern int lbl_83297998[];
extern char lbl_821C250C[];
void fn_8313AA48(void) { Local_8313AA48 l; l.zero=0; fn_828C03E8(fn_828A1D58(),&l); if((unsigned)lbl_83297998[0x54/4]) fn_822315A0((void *)lbl_83297998[0x54/4]); fn_824C0330(&lbl_83297998[3]); lbl_83297998[0]=(int)lbl_821C250C; }
