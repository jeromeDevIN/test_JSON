#include <string.h>
#include <jansson.h>

#define URL_FORMAT   "https://api.github.com/repos/%s/%s/commits"
#define URL_SIZE     256

/* Return the offset of the first newline in text or the length of
   text if there's no newline */
static int newline_offset(const char *text)
{
    const char *newline = strchr(text, '\n');
    if(!newline)
        return strlen(text);
    else
        return (int)(newline - text);
}
