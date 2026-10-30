int fn_828EA268(unsigned int n) { int count=0; if(n) { do { n >>= 1; ++count; } while(n > 0); } return count; }
