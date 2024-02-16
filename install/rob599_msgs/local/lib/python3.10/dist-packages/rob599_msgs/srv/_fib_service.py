# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rob599_msgs:srv/FibService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FibService_Request(type):
    """Metaclass of message 'FibService_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rob599_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rob599_msgs.srv.FibService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__fib_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__fib_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__fib_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__fib_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__fib_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FibService_Request(metaclass=Metaclass_FibService_Request):
    """Message class 'FibService_Request'."""

    __slots__ = [
        '_number',
    ]

    _fields_and_field_types = {
        'number': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.number = kwargs.get('number', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.number != other.number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def number(self):
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'number' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._number = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FibService_Response(type):
    """Metaclass of message 'FibService_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rob599_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rob599_msgs.srv.FibService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__fib_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__fib_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__fib_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__fib_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__fib_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FibService_Response(metaclass=Metaclass_FibService_Response):
    """Message class 'FibService_Response'."""

    __slots__ = [
        '_fibonacci',
    ]

    _fields_and_field_types = {
        'fibonacci': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fibonacci = kwargs.get('fibonacci', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.fibonacci != other.fibonacci:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fibonacci(self):
        """Message field 'fibonacci'."""
        return self._fibonacci

    @fibonacci.setter
    def fibonacci(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fibonacci' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'fibonacci' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._fibonacci = value


class Metaclass_FibService(type):
    """Metaclass of service 'FibService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rob599_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rob599_msgs.srv.FibService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__fib_service

            from rob599_msgs.srv import _fib_service
            if _fib_service.Metaclass_FibService_Request._TYPE_SUPPORT is None:
                _fib_service.Metaclass_FibService_Request.__import_type_support__()
            if _fib_service.Metaclass_FibService_Response._TYPE_SUPPORT is None:
                _fib_service.Metaclass_FibService_Response.__import_type_support__()


class FibService(metaclass=Metaclass_FibService):
    from rob599_msgs.srv._fib_service import FibService_Request as Request
    from rob599_msgs.srv._fib_service import FibService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
