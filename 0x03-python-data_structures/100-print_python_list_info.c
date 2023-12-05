#include <Python.h>
#include <object.h>
#include <listobject.h>

	/**
	 * print_python_list_info - Prints information about a Python list
	 * @p: Pointer to a Python object (assumed to be a list)
	 *
	 * This function prints information about the given Python list, including
	 * its size, allocated size, and the data type of each element.
	 */

void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int i;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %i: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
}
