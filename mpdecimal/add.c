#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib/include/mpdecimal.h"

int main(int argc, char **argv) {
    mpd_context_t ctx;
	mpd_t *a, *b;
	mpd_t *result;
	char *rstring;
	char status_str[MPD_MAX_FLAG_STRING];

	if (argc != 3) {
		fprintf(stderr, "add: usage: ./add x y\n");
		exit(1);
	}
	mpd_init(&ctx, 38);
	ctx.traps = 0;

	result = mpd_new(&ctx);
	a = mpd_new(&ctx);
	b = mpd_new(&ctx);
	mpd_set_string(a, argv[1], &ctx);
	mpd_set_string(b, argv[2], &ctx);

	mpd_add(result, a, b, &ctx);

	rstring = mpd_to_sci(result, 1);
	mpd_snprint_flags(status_str, MPD_MAX_FLAG_STRING, ctx.status);
	// printf("%s  %s\n", rstring, status_str);

	mpd_del(a);
	mpd_del(b);
	mpd_del(result);
	mpd_free(rstring);

	return 0;
}