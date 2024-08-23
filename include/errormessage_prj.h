#ifndef ERRORMESSAGE_PRJ_H_INCLUDED
#define ERRORMESSAGE_PRJ_H_INCLUDED

#define ERROR_BUF_SIZE 4

#define ERROR_MESSAGE_LIST \
   ERROR_MESSAGE_ENTRY(OVERCURRENT, ERROR_STOP) \
   ERROR_MESSAGE_ENTRY(THROTTLE1, ERROR_DISPLAY) \
   ERROR_MESSAGE_ENTRY(THROTTLE2, ERROR_DISPLAY) \
   ERROR_MESSAGE_ENTRY(CANTIMEOUT, ERROR_STOP) \
   ERROR_MESSAGE_ENTRY(EMCYSTOP, ERROR_STOP) \
   ERROR_MESSAGE_ENTRY(MPROT, ERROR_STOP) \
   ERROR_MESSAGE_ENTRY(DESAT, ERROR_STOP) \
   ERROR_MESSAGE_ENTRY(OVERVOLTAGE, ERROR_STOP) \
   ERROR_MESSAGE_ENTRY(ENCODER, ERROR_DISPLAY) \
   ERROR_MESSAGE_ENTRY(PRECHARGE, ERROR_STOP) \
   ERROR_MESSAGE_ENTRY(TMPHSMAX, ERROR_DERATE) \
   ERROR_MESSAGE_ENTRY(CURRENTLIMIT, ERROR_DERATE) \
   ERROR_MESSAGE_ENTRY(PWMSTUCK, ERROR_DISPLAY) \
   ERROR_MESSAGE_ENTRY(HICUROFS1, ERROR_DISPLAY) \
   ERROR_MESSAGE_ENTRY(HICUROFS2, ERROR_DISPLAY) \
   ERROR_MESSAGE_ENTRY(HIRESOFS, ERROR_DISPLAY) \
   ERROR_MESSAGE_ENTRY(LORESAMP, ERROR_DISPLAY) \
   ERROR_MESSAGE_ENTRY(TMPMMAX, ERROR_DERATE) \
   ERROR_MESSAGE_ENTRY(CANCRC, ERROR_STOP) \
   ERROR_MESSAGE_ENTRY(CANCOUNTER, ERROR_STOP) \

#endif // ERRORMESSAGE_PRJ_H_INCLUDED
