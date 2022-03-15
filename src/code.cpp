#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return ((left - right)*(left - right));
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (mask & (1 << bit_pos) && mask >= 0 && bit_pos >= 0){
      return true;
    }
    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int maxim=left;
    if (middle > maxim){
      maxim = middle;
    }
    if (right > maxim){
      maxim = right;
    }

    return maxim;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr && right != nullptr){
      int temp=*left;
      *left=*right;
      *right= temp;

    }

  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr != nullptr && length > 0){
      int summ = 0;
      for (int i = 0; i < length; i++){
        summ += arr[i];
      }
      return summ;

    }


    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr != nullptr && length > 0 ){
      int *maxim= &arr[0];
      for (int i = 0 ; i < length; i++){
        if (arr[i] > *maxim){
          maxim = &arr[i];
        }
      }
      return maxim;

    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0){
      int* a = new int[length];
      std::fill(a,a + length,init_value);
      return a;
    }
    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (length > 0 && arr_in != nullptr){
      int *cln_ar = new int[length];
      std::copy(arr_in,arr_in + length,cln_ar);
      return cln_ar;
    }
    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr){
      os << "Invalid argument: arr\\n";
    }
    else if (length <= 0){
      os << "Invalid argument: length\\n";
    }
    else if (k <= 0){
      os << "Invalid argument: k\\n";

    }
    else if (arr != nullptr && length > 0 && k > 0){
      for (int i = 0; i < length; i++){
        if (k == 1){
          os << arr[i] << "\t";
        }
        else if (i % k == 0){
          os << arr[i] << "\t";
        }
      }

    }
  }

}  // namespace assignment
