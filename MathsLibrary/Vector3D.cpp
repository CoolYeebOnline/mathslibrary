#include "Vector3D.h"
#include "Vector2D.h"
#include "Matrix3x3.h"
#include <cmath>


Vector3D::Vector3D()
{
	m_coordinates[0] = 0.f;
	m_coordinates[1] = 0.f;
	m_coordinates[2] = 0.f;
}

Vector3D::Vector3D(float a_x, float a_y, float a_z) {
	m_coordinates[0] = a_x;
	m_coordinates[1] = a_y;
	m_coordinates[2] = a_z;
}

Vector3D::Vector3D(Vector2D other) {

}

const float Vector3D::operator[](const int a_i) const {
	return m_coordinates[a_i];
}

const Vector3D Vector3D::operator+(const Vector3D& a_other) const {
	Vector3D newvector3;

	newvector3.m_coordinates[0] = m_coordinates[0] + a_other.m_coordinates[0];
	newvector3.m_coordinates[1] = m_coordinates[1] + a_other.m_coordinates[1];
	newvector3.m_coordinates[2] = m_coordinates[2] + a_other.m_coordinates[2];

	return newvector3;
}

void Vector3D::operator+=(const Vector3D& a_other) {
	m_coordinates[0] += a_other.m_coordinates[0];
	m_coordinates[1] += a_other.m_coordinates[1];
	m_coordinates[2] += a_other.m_coordinates[2];
}

const Vector3D Vector3D::operator-(const Vector3D& a_other) const {
	Vector3D subtractvector3;

	subtractvector3.m_coordinates[0] = m_coordinates[0] - a_other.m_coordinates[0];
	subtractvector3.m_coordinates[1] = m_coordinates[1] - a_other.m_coordinates[1];
	subtractvector3.m_coordinates[2] = m_coordinates[2] - a_other.m_coordinates[2];
}

void Vector3D::operator-=(const Vector3D& a_other) {
	m_coordinates[0] -= a_other.m_coordinates[0];
	m_coordinates[1] -= a_other.m_coordinates[1];
	m_coordinates[2] -= a_other.m_coordinates[2];
}

const Vector3D Vector3D::operator*(const float a_other) const {
	Vector3D multvector3;

	multvector3.m_coordinates[0] = m_coordinates[0] * a_other;
	multvector3.m_coordinates[1] = m_coordinates[1] * a_other;
	multvector3.m_coordinates[2] = m_coordinates[2] * a_other;
}

const Vector3D Vector3D::operator*(const Vector3D& a_other) const {
	Vector3D multvector3;

	multvector3.m_coordinates[0] = m_coordinates[0] * a_other.m_coordinates[0];
	multvector3.m_coordinates[1] = m_coordinates[1] * a_other.m_coordinates[1];
	multvector3.m_coordinates[2] = m_coordinates[2] * a_other.m_coordinates[2];
}

void Vector3D::operator*=(const Vector3D& a_other) {
	m_coordinates[0] *= a_other.m_coordinates[0];
	m_coordinates[1] *= a_other.m_coordinates[1];
	m_coordinates[2] *= a_other.m_coordinates[2];
}
void Vector3D::operator*=(const float a_other) {
	m_coordinates[0] *= a_other;
	m_coordinates[1] *= a_other;
	m_coordinates[2] *= a_other;
}

const Vector3D Vector3D::operator*(const Matrix3x3 &a_other) const {
	return Vector3D();
}

const Vector3D Vector3D::operator/(const float a_other) const {
	Vector3D divvector;

	divvector.m_coordinates[0] = m_coordinates[0] / a_other;
	divvector.m_coordinates[1] = m_coordinates[1] / a_other;
	divvector.m_coordinates[2] = m_coordinates[2] / a_other;
}

const Vector3D Vector3D::operator/(const Vector3D& a_other) const {
	Vector3D divvector2;

	divvector2.m_coordinates[0] = m_coordinates[0] / a_other.m_coordinates[0];
	divvector2.m_coordinates[1] = m_coordinates[1] / a_other.m_coordinates[1];
	divvector2.m_coordinates[2] = m_coordinates[2] / a_other.m_coordinates[2];
}

void Vector3D::operator/=(const Vector3D& a_other) {
	m_coordinates[0] /= a_other.m_coordinates[0];
	m_coordinates[1] /= a_other.m_coordinates[1];
	m_coordinates[2] /= a_other.m_coordinates[2];
}

void Vector3D::operator/=(const float a_other) {
	m_coordinates[0] /= a_other;
	m_coordinates[1] /= a_other;
	m_coordinates[2] /= a_other;
}

const float Vector3D::magnitude() const {
	sqrtf(magnitudeSq());
}

const float Vector3D::magnitudeSq() const {
	return (Vector3D::m_coordinates[0] * Vector3D::m_coordinates[0]) + (Vector3D::m_coordinates[1] * Vector3D::m_coordinates[1]) + (Vector3D::m_coordinates[2]);
}

const float Vector3D::distance(const Vector3D& a_other)const {
	return Vector3D::m_coordinates[0] - Vector3D::m_coordinates[1];
}

const float Vector3D::distanceSq(const Vector3D& a_other) const {
	return (Vector3D::m_coordinates[0] * Vector3D::m_coordinates[0]) - (Vector3D::m_coordinates[1] * Vector3D::m_coordinates[1]);
}

const float Vector3D::dotProduct(const Vector3D& a_other) const {
	return(m_coordinates[0] * a_other[0]) + (m_coordinates[1] * a_other[1]) + (m_coordinates[2] * a_other[2]);
}

const Vector3D Vector3D::crossProduct(const Vector3D& a_rv3a) const {
	return Vector3D((m_coordinates[1] * a_rv3a[2]) - (m_coordinates[2] * a_rv3a[1]), (m_coordinates[2] * a_rv3a[0]) - (m_coordinates[0] * a_rv3a[2]), (m_coordinates[0] * a_rv3a[1]) - (m_coordinates[1] * a_rv3a[0]));
}

void Vector3D::normalise() {
	m_coordinates[0] / magnitude();
	m_coordinates[1] / magnitude();
	m_coordinates[2] / magnitude();
}

const Vector3D Vector3D::normalised() const {
	Vector3D normal3Vector = *this;
}

