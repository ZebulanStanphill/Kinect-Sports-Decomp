extern unsigned *fn_8265D5A8(void *);
extern void fn_8266AE68(void *,void *,unsigned *);
void fn_8266B060(void *object,void *where,void *iterator) {
 unsigned value=*fn_8265D5A8(iterator);
 fn_8266AE68(object,where,&value);
}
