#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "hello_world_demo.h"

void test_hello_world_demo() {
    const char* result = hello_world_demo();
    assert(strcmp(result, "Hello, World!") == 0);
    printf("✓ hello_world_demo returns correct string\n");
}

int main() {
    printf("Running tests...\n");
    test_hello_world_demo();
    printf("All tests passed!\n");
    return 0;
}