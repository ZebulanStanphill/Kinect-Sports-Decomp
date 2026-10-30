extern void fn_82CEAAA0(void *);
extern void *fn_82CE5410(void);
extern void fn_82CEA160(void *,void *,int,int);
void fn_82CFA2D0(char *object,int message_id,char enabled) {if(enabled) fn_82CEAAA0(object+8); else {char *state=fn_82CE5410();fn_82CEA160(object+8,*(void **)(state+16),message_id,1);}}
