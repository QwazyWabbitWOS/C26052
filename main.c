#include <string.h>
#include <stdio.h>

typedef float vec_t;
typedef vec_t vec3_t[3];

int main(char* value)
{
	vec3_t	vec = { 0 };

	if (sscanf_s(value, "%f %f %f", &vec[0], &vec[1], &vec[2]) != 3) {
		printf("WARNING: Vector field incomplete in %s\n", __func__);
	}
	// ... do something else ...
}
