from unittest import TestCase
from linked_list import SingleLinkedList


class TestList(TestCase):
    def test_add(self):
        print 'whee'
        my_list = SingleLinkedList()
        my_list.add(1)
        self.assertEqual(my_list.head.data, 1)
    
    def test_many(self):
        my_list = SingleLinkedList()
        for data in range(5):
            my_list.add(data)

        self.assertEqual(list(my_list), range(5))
