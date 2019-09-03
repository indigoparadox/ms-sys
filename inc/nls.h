#ifndef NLS_H
#define NLS_H

#define _(String) (String)
#define gettext_noop(String) (String)
#define N_(String) gettext_noop(String)

/* Init Native language support */
void nls_init(void);

#endif
