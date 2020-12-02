/**
 * Funkcja sprawdza, czy z trzech odcinków da się zbudować trójkąt.
 * Pobiera trzy wartości typu int i zwraca wartość typu bool.
 *
 * \param[in] x długość pierwszego odcinka.
 * \param[in] y długość drugiego odcinka.
 * \param[in] z długość trzeciego odcinka.
 * \return 1 jeśli da się zbudować trójkąt, 0 jeśli nie da się zbudować trójkąta.
 */
bool triangle(int x, int y, int z)
{
  return (x < y+z) && (y < x+z) && (z < x+y);
}
