struct Result {void *node;unsigned int flag;};extern void *fn_8289BD20(void *,void *);extern struct Result *fn_8289BC58(struct Result *,void *,void *,int);
void **fn_8289CA40(void **out,void *tree,void *value) {struct Result result;fn_8289BC58(&result,tree,fn_8289BD20(tree,value),0);*out=result.node;return out;}
