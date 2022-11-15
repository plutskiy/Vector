//
// Created by Plutskiy on 08.11.2022.
//

#include "ray_bundle.h"

#ifndef LET_5_BMSTU_VECTOR_H
#define LET_5_BMSTU_VECTOR_H

#endif //LET_5_BMSTU_VECTOR_H

namespace bmstu {
    template<typename Type>
    class vector {

    public:
        using Iterator = Type *;
        using ConstIterator = const Type *;

        vector(size_t size, const Type &value = Type{}) :
                size_(size), capacity_(size), data_(size) {
            auto first = begin();
            auto last = end();
            for (; first != last; ++first) {
                *first = value;
            }
        }
        //Конструктор копироания
//        vector(const Vector<Type> &other) : size_(other.size()), capacity_(other.capacity()){
//            std::copy(other.begin(), other.end(), begin());

        }//Конструктор перемещения
        vector(const Vector<Type> &&other) {
            this->swap other;
        }
        vector(std::initializer_list<Type> ilist) : size_(ilist.size()), capacity_(ilist.size()), data(ilist.size()){
            std::copy(other.begin)
        }
        vector() noexcept = default;

        ///Iterators
        Iterator begin() noexcept {
            return data_.Get();
        }

        Iterator end() noexcept {
            return data_.Get() + size;
        }

        ConstIterator begin() noexcept {
            return data_.Get() + size;
        }

        ConstIterator end() noexcept {
            return data_.Get() + size;
        }

        Type & operator[](size_t index) noexcept{
            return data_[index];
        }
        const Type & operator[](size_t index) noexcept{
            return data_[index];
        }
        //getters
        size_t size() const noexcept {
            return size_;
        }
        size_t capacity() const noexcept{
            return capacity_;
        }
        void Clear() noexcept{
            size_ = 0;
        }
        void swap (vector &other) noexcept{
            std::swap(size_, other.size_);
            std::swap(capacity_, other.capacity_);
            data.swap(other.data_);
        }
        friend void swap(vector<Type> & lhs, vector<Type> & rhs){
            lhs.swap(rhs);
        }
        //Оперотор копирующего присваивания
        vector& operator=(const vector<Type> & other) {
            /// самоприсваивание
            if (this != &other) {
                if (other.empty()) {
                    Clear();
                } else {
                    auto copu(other);
                    this->swap(copy);
                }
            }
        }

        //Оперотор перемещающего присваивания
        vector& operator=(const vector<Type> & other) {
            /// самоприсваивание
            if (this != &other) {
                if (other.empty()) {
                    Clear();
                } else {
                    auto copu(std::move(other);
                    this->swap(copy);
                }
            }
        }
        void Reserve(size_t new_size){
            if (new_size > capacity_){
                size_t new_capacity = std::max(new_size, capacity_ * 2);
                Reserve(new_size);
            } else {
                std::fill(end(), begin() + new_size, Type{});
                size_ = new_size
            }
            void Reserve {size_t new_capacity){
                if (new_capacity > capacity_){
                    array_bundle<Type> tmp(new_capacity);
                    auto first = begin();
                    auto last = end();
                    auto tmp_ptr = tmp.Get();
                    for(); first != last; ++first, ++tmp_ptr){

                    }
            }
        Iterator Insert (ConstIterator pos, Type &&value) {
            size_t n = pos - cbegin();
            if (capacity_ = 0) {
                // Reserve
                Reserve(1);
            }
            if (size_ == capacity_) {
                capacity_ *= 2;
            }
            array_bundle<Type> temp(capacity_);
            auto temp_ptr = temp.Get();
            auto first = begin();
            auto last = begin() + n;
            for(; first != last; ++first, ++temp_ptr){
                    *temp_ptr = std::move(*first);
            }
//            temp_ptr[n] = std::move(value);

            temo_ptr = temp.Get() + n;
            first = begin() + n + 1;
            last = begin() + n;
            for(; first != last; ++first, ++temp_ptr){
                    *temp_ptr = std::move(*first);
            }
        }
    private:
        size_t size_ = 0;
        size_t capacity = 0;
        array_bundle<Type> data_;

    };
}