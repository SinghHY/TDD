#ifndef _PARSER_H
#define _PARSER_H

typedef enum _PARSER_STATE_T {
    PARSER_LOOKING_FOR_START = 0,
    PARSER_LOOKING_FOR_CMD,
    PARSER_LOOKING_FOR_LEN,
    PARSER_LOOKING_FOR_DAT,
    PARSER_LOOKING_FOR_END
} PARSER_STATE_T;

char* Parser_AddChar(char NewChar);

#endif // _PARSER_H
