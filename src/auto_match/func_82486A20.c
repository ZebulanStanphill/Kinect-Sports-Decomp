extern char *strstr(const char *,const char *);
const char *fn_82486A20(char *p) {
 const char *s=p+0x234;
 if (strstr(s,"boxing")) return "reviewscreen_boxingcompetitorname";
 if (strstr(s,"football")) return "reviewscreen_footballcompetitorname";
 if (strstr(s,"tabletennis")) return "reviewscreen_tabletenniscompetitorname";
 if (strstr(s,"bowling")) return "reviewscreen_bowlingcompetitorname";
 if (strstr(s,"athletics")) return "reviewscreen_athleticscompetitorname";
 return "reviewscreen_volleyballcompetitorname";
}
