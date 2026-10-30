typedef int (*OnExit)(void);extern OnExit _onexit(OnExit);int atexit(void (*callback)(void)) {return _onexit((OnExit)callback)?0:-1;}
