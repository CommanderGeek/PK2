#include <iostream>

template <class T>
class Matrix
{
public:
    T **m;
    int dimension;
    Matrix(int n) : dimension(n)
    {
        m = new T *[n];
        for (int i = 0; i < n; ++i)
        {
            m[i] = new T[n];
        }
    }
    ~Matrix(){
        for(int i; i < get_dimension(); i++){
            delete[] m[i];
        }
        delete[] m;
    };
    Matrix(Matrix &matrix)
    {
        for (size_t i = 0; i < matrix.dimension; i++)
        {
            for (size_t j = 0; j < matrix.dimension; j++)
            {
                this->m[i][j] = matrix.get_m()[i][j];
            }
        }
    };
    void set(int i, int j, T value)
    {
        m[i][j] = value;
    }
    int get_dimension()
    {
        return dimension;
    }
    T **get_m()
    {
        return m;
    }
    Matrix<T>& Matrix<T>::operator*(const Matrix<T>& mat)
{
    Matrix<T> temp(get_dimension());
    for (int i = 0; i < temp.get_dimension(); ++i) {
        for (int j = 0; j < temp.get_dimension(); ++j) {
            for (int k = 0; k < get_dimension(); ++k) {
                temp.get_m() [i][j] += (m[i][k] * mat.get_m()[k][j]);
            }
        }
    }
    return (*this = temp);
}
};

template <class T>
std::ostream &operator<<(std::ostream &ausgabe, Matrix<T> &c)
{
    for (size_t i = 0; i < c.get_dimension(); i++)
    {
        for (size_t j = 0; j < c.get_dimension(); j++)
        {
            ausgabe << c.get_m()[i][j] << "   ";
        }
        ausgabe << std::endl;
    }
    return ausgabe;
};
