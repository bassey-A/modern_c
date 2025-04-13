#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>

#define ACTIVITIES (char const* const[sports]){ \
    [football] = "football_A",                    \
    [pingis] = "pingis_A",                        \
    [badminton] = "badminton_A",                  \
    [boxing] = "boxing_A",                        \
    [swimming] = "swimming_A",                    \
    [volleyball] = "volleyball_A",                \
    [basketball] = "basketball_A",                \
}   

#define FULL_FOOTBALL (1U << football)
#define FULL_PINGIS (1U << pingis)
#define FULL_BADMINTON (1U << badminton)
#define FULL_BOXING (1U << boxing)
#define FULL_SWIMMING (1U << swimming)
#define FULL_VOLLEYBALL (1U << volleyball)
#define FULL_BASKETBALL (1U << basketball)
#define FULL_ACTIVITIES ((1U << sports) - 1)
#define NO_ACTIVITY 0U


int main(void){
    // time_t start_time = time(0);
    // clock_t b_time = clock();
    // int c = 43;
    // printf("c is %d\n", c++);
    // printf("c is %d\n", c);

    // size_t numbers[] = {12, 23, 43, 11, 42, 38, 84, 46};
    // size_t size[2] = {0, 0};

    // for(size_t i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
    //     size[(numbers[i] >= 50)] += 1;
    // }
    // printf("%d numbers are <= 50 and %d numbers are > 50\n", size[0], size[1]);
    
    // printf("CLOCKS_PER_SEC => %zu\n", CLOCKS_PER_SEC);
    // for(size_t i = 0; i <= 1000000000; i++){
    //     ;
    // }
    // time_t stop_time = time(0);
    // clock_t e_time = clock();
    // time_t diff_time = difftime(start_time, stop_time);
    // clock_t d_time = e_time -b_time;
    // printf("Diff-time => %zu\n", diff_time);
    // printf("Time diff => %zu or %zu\n", d_time, d_time/CLOCKS_PER_SEC);
    // printf("START_TIME => %zu\n", start_time);
    // printf("STOP_TIME => %zu\n", stop_time);
    // double a = 0xC.CCCCCCCCCCCCCCDP-6;
    // printf("Double a = %g\n", a);
    // printf("Double a = %f\n", a);
    // double f = {3};
    // printf("f is %f\n", f);
    // int an = {3.2};
    // printf("an = %d\n", an);

    enum hkif_sports {
        football, basketball, badminton, pingis, boxing, volleyball, swimming, sports,
    };

    const char* const activities[] = {
        [football] = "football", [pingis] = "pingis", [badminton] = "badminton",
        [boxing] = "boxing", [swimming] = "swimming", [volleyball] = "volleyball",
        [basketball] = "basketball"
        };
    
    printf("HKIF has: \n");
    for (size_t i = 0; i < sports; i++){
        printf("%d: %s <===========> %s\n", i+1, ACTIVITIES[i], activities[i]);
    }
    printf("ALL THE BITS = %d\n", sizeof(FULL_ACTIVITIES));
    printf("NO BITS = %d\n", sizeof(NO_ACTIVITY));
    printf("SWIMMING = %d\n", sizeof(FULL_SWIMMING));
}
