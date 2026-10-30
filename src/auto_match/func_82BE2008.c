extern void fn_82BE5340(void *);
extern void fn_82BE5350(void *);
extern char *fn_82BE5378(void *);
extern int stricmp(const char *, const char *);
char *fn_82BE2008(char *self, const char *name) { if (name) { void *it=self+0x160; fn_82BE5340(it); while (*(int *)(self+0x168)) { if (!stricmp(name,fn_82BE5378(it))) return fn_82BE5378(it); fn_82BE5350(it); } } return 0; }
