#ifndef ZADS_H
#define ZADS_H

/** Russian symbols activation in every zad
  * WARNING! Your system can have language pack compatibility issues
 */

#ifndef RUS
//#define RUS

// validation functions
long double double_type_input();
long long int_type_input();
bool yes_no_input();

// dom_zad1
void zad_imya();  // 1
void zad_ariphmetica();  // 2
void zad_uravneniye();  // 3
void zad_yeshyo_uravneniye();  // 4
void zad_lampa_so_shtorkoy();  // 5

// dom_zad2
void zad_konus();  // 6
void zad_razvetvleniye();  // 7
void zad_funcziya();  // 8
void zad_poryadok();  // 9
void zad_tabulyaziya();  // 10

// dom_zad3
void zad_zayem();  // 11
void zad_ssuda();  // 12
void zad_copy_file();  // 13
void zad_filtr();  // 14
void zad_sortirovka_bukv();  // 15

// without russian language compatibility

// dom_zad4
void zad_file();  // 16
void zad_znak_chisla();  // 17
void zad_geometricheskiye_figurs();  // 18

#endif  // RUS
#endif  // ZADS_H
