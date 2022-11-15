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
    private:
        size_t size_ = 0;
        size_t capacity = 0;
        array_bundle<Type> data_;


    };
}