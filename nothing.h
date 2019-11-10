#ifndef __NOTHING_H__
#define __NOTHING_H__

typedef void none_t;
#define nop ;
#define no
none_t nofunc(none_t);
class Nothing{public:none_t Nothing();none_t ~Nothing();none_t none();};
#define nothing {}
#endif
