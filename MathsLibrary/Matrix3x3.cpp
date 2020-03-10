#include <cmath>
#include "Matrix3x3.h"
#include "Vector3D.h"

Matrix3x3::Matrix3x3()
{
	m_matrixValues[0] = 0.0f;
	m_matrixValues[1] = 0.0f;
	m_matrixValues[2] = 0.0f;

	m_matrixValues[3] = 0.0f;
	m_matrixValues[4] = 0.0f;
	m_matrixValues[5] = 0.0f;

	m_matrixValues[6] = 0.0f;
	m_matrixValues[7] = 0.0f;
	m_matrixValues[8] = 0.0f;
}

//m_matrixValues[0] + a_other[0]

//(m_matrixValues[0] * a_other[0]) + (

Matrix3x3::Matrix3x3(const float a_fm11, const float a_fm12, const float a_fm13, 
	const float a_fm21, const float a_fm22, const float a_fm23, 
	const float a_fm31, const float a_fm32, const float a_fm33) {

	m_matrixValues[0] = a_fm11;
	m_matrixValues[1] = a_fm12;
	m_matrixValues[2] = a_fm13;

	m_matrixValues[3] = a_fm21;
	m_matrixValues[4] = a_fm22;
	m_matrixValues[5] = a_fm23;

	m_matrixValues[6] = a_fm31;
	m_matrixValues[7] = a_fm32;
	m_matrixValues[8] = a_fm33;
}

Matrix3x3::Matrix3x3(const float* a_fpm33Values) {

}

const Matrix3x3 Matrix3x3::Identity() {
	Matrix3x3 identMatrix;

	identMatrix.m_matrixValues[0] = 1;
	identMatrix.m_matrixValues[1] = 0;
	identMatrix.m_matrixValues[2] = 0;
	
	identMatrix.m_matrixValues[3] = 0;
	identMatrix.m_matrixValues[4] = 1;
	identMatrix.m_matrixValues[5] = 0;
	
	identMatrix.m_matrixValues[6] = 0;
	identMatrix.m_matrixValues[7] = 0;
	identMatrix.m_matrixValues[8] - 1;
}

const Vector3D Matrix3x3::GetRow(const int a_irowNumber) const {

}

void Matrix3x3::SetRow(const int a_irowNumber, const Vector3D& a_rowValues) {

}

const Matrix3x3 Matrix3x3::RotateX(const float a_ftheta) const {

}

const Matrix3x3 Matrix3x3::RotateY(const float a_ftheta) const {

}

const Matrix3x3 Matrix3x3::RotateZ(const float a_ftheta) const {

}

const Matrix3x3 Matrix3x3::operator+(const Matrix3x3& a_other) const {

}

void Matrix3x3::operator+=(const Matrix3x3& a_other) {

}

const Matrix3x3 Matrix3x3::operator-(const Matrix3x3& a_other) const {

}

void Matrix3x3::operator-=(const Matrix3x3& a_other) {

}

const Matrix3x3 Matrix3x3::operator*(const Matrix3x3& a_other) const {

}

void Matrix3x3::operator*=(const Matrix3x3& a_other) {

}

const Matrix3x3 Matrix3x3::operator*(const float& a_other) const {

}

void Matrix3x3::operator*=(const float& a_other) {

}

const bool Matrix3x3::operator==(const Matrix3x3& a_other) const {

}

const bool Matrix3x3::operator!=(const Matrix3x3& a_other) const {

}

const float Matrix3x3::operator[](const int i) const {

}