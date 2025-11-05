# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ur_ros_rtde_msgs:action/SetFreedrive.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'free_axes'
# Member 'feature'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetFreedrive_Goal(type):
    """Metaclass of message 'SetFreedrive_Goal'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_freedrive__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_freedrive__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_freedrive__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_freedrive__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_freedrive__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFreedrive_Goal(metaclass=Metaclass_SetFreedrive_Goal):
    """Message class 'SetFreedrive_Goal'."""

    __slots__ = [
        '_activated',
        '_free_axes',
        '_feature',
    ]

    _fields_and_field_types = {
        'activated': 'boolean',
        'free_axes': 'sequence<int32>',
        'feature': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.activated = kwargs.get('activated', bool())
        self.free_axes = array.array('i', kwargs.get('free_axes', []))
        self.feature = array.array('d', kwargs.get('feature', []))

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
        if self.activated != other.activated:
            return False
        if self.free_axes != other.free_axes:
            return False
        if self.feature != other.feature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def activated(self):
        """Message field 'activated'."""
        return self._activated

    @activated.setter
    def activated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'activated' field must be of type 'bool'"
        self._activated = value

    @builtins.property
    def free_axes(self):
        """Message field 'free_axes'."""
        return self._free_axes

    @free_axes.setter
    def free_axes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'free_axes' array.array() must have the type code of 'i'"
            self._free_axes = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'free_axes' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._free_axes = array.array('i', value)

    @builtins.property
    def feature(self):
        """Message field 'feature'."""
        return self._feature

    @feature.setter
    def feature(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'feature' array.array() must have the type code of 'd'"
            self._feature = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'feature' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._feature = array.array('d', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFreedrive_Result(type):
    """Metaclass of message 'SetFreedrive_Result'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_freedrive__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_freedrive__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_freedrive__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_freedrive__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_freedrive__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFreedrive_Result(metaclass=Metaclass_SetFreedrive_Result):
    """Message class 'SetFreedrive_Result'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFreedrive_Feedback(type):
    """Metaclass of message 'SetFreedrive_Feedback'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_freedrive__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_freedrive__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_freedrive__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_freedrive__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_freedrive__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFreedrive_Feedback(metaclass=Metaclass_SetFreedrive_Feedback):
    """Message class 'SetFreedrive_Feedback'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFreedrive_SendGoal_Request(type):
    """Metaclass of message 'SetFreedrive_SendGoal_Request'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_freedrive__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_freedrive__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_freedrive__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_freedrive__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_freedrive__send_goal__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

            from ur_ros_rtde_msgs.action import SetFreedrive
            if SetFreedrive.Goal.__class__._TYPE_SUPPORT is None:
                SetFreedrive.Goal.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFreedrive_SendGoal_Request(metaclass=Metaclass_SetFreedrive_SendGoal_Request):
    """Message class 'SetFreedrive_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'ur_ros_rtde_msgs/SetFreedrive_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ur_ros_rtde_msgs', 'action'], 'SetFreedrive_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Goal
        self.goal = kwargs.get('goal', SetFreedrive_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Goal
            assert \
                isinstance(value, SetFreedrive_Goal), \
                "The 'goal' field must be a sub message of type 'SetFreedrive_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFreedrive_SendGoal_Response(type):
    """Metaclass of message 'SetFreedrive_SendGoal_Response'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_freedrive__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_freedrive__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_freedrive__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_freedrive__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_freedrive__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFreedrive_SendGoal_Response(metaclass=Metaclass_SetFreedrive_SendGoal_Response):
    """Message class 'SetFreedrive_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_SetFreedrive_SendGoal(type):
    """Metaclass of service 'SetFreedrive_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__set_freedrive__send_goal

            from ur_ros_rtde_msgs.action import _set_freedrive
            if _set_freedrive.Metaclass_SetFreedrive_SendGoal_Request._TYPE_SUPPORT is None:
                _set_freedrive.Metaclass_SetFreedrive_SendGoal_Request.__import_type_support__()
            if _set_freedrive.Metaclass_SetFreedrive_SendGoal_Response._TYPE_SUPPORT is None:
                _set_freedrive.Metaclass_SetFreedrive_SendGoal_Response.__import_type_support__()


class SetFreedrive_SendGoal(metaclass=Metaclass_SetFreedrive_SendGoal):
    from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_SendGoal_Request as Request
    from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFreedrive_GetResult_Request(type):
    """Metaclass of message 'SetFreedrive_GetResult_Request'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_freedrive__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_freedrive__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_freedrive__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_freedrive__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_freedrive__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFreedrive_GetResult_Request(metaclass=Metaclass_SetFreedrive_GetResult_Request):
    """Message class 'SetFreedrive_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFreedrive_GetResult_Response(type):
    """Metaclass of message 'SetFreedrive_GetResult_Response'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_freedrive__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_freedrive__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_freedrive__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_freedrive__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_freedrive__get_result__response

            from ur_ros_rtde_msgs.action import SetFreedrive
            if SetFreedrive.Result.__class__._TYPE_SUPPORT is None:
                SetFreedrive.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFreedrive_GetResult_Response(metaclass=Metaclass_SetFreedrive_GetResult_Response):
    """Message class 'SetFreedrive_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'ur_ros_rtde_msgs/SetFreedrive_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ur_ros_rtde_msgs', 'action'], 'SetFreedrive_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Result
        self.result = kwargs.get('result', SetFreedrive_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Result
            assert \
                isinstance(value, SetFreedrive_Result), \
                "The 'result' field must be a sub message of type 'SetFreedrive_Result'"
        self._result = value


class Metaclass_SetFreedrive_GetResult(type):
    """Metaclass of service 'SetFreedrive_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__set_freedrive__get_result

            from ur_ros_rtde_msgs.action import _set_freedrive
            if _set_freedrive.Metaclass_SetFreedrive_GetResult_Request._TYPE_SUPPORT is None:
                _set_freedrive.Metaclass_SetFreedrive_GetResult_Request.__import_type_support__()
            if _set_freedrive.Metaclass_SetFreedrive_GetResult_Response._TYPE_SUPPORT is None:
                _set_freedrive.Metaclass_SetFreedrive_GetResult_Response.__import_type_support__()


class SetFreedrive_GetResult(metaclass=Metaclass_SetFreedrive_GetResult):
    from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_GetResult_Request as Request
    from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFreedrive_FeedbackMessage(type):
    """Metaclass of message 'SetFreedrive_FeedbackMessage'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_freedrive__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_freedrive__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_freedrive__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_freedrive__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_freedrive__feedback_message

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

            from ur_ros_rtde_msgs.action import SetFreedrive
            if SetFreedrive.Feedback.__class__._TYPE_SUPPORT is None:
                SetFreedrive.Feedback.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFreedrive_FeedbackMessage(metaclass=Metaclass_SetFreedrive_FeedbackMessage):
    """Message class 'SetFreedrive_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'ur_ros_rtde_msgs/SetFreedrive_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ur_ros_rtde_msgs', 'action'], 'SetFreedrive_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Feedback
        self.feedback = kwargs.get('feedback', SetFreedrive_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Feedback
            assert \
                isinstance(value, SetFreedrive_Feedback), \
                "The 'feedback' field must be a sub message of type 'SetFreedrive_Feedback'"
        self._feedback = value


class Metaclass_SetFreedrive(type):
    """Metaclass of action 'SetFreedrive'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.action.SetFreedrive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__set_freedrive

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from ur_ros_rtde_msgs.action import _set_freedrive
            if _set_freedrive.Metaclass_SetFreedrive_SendGoal._TYPE_SUPPORT is None:
                _set_freedrive.Metaclass_SetFreedrive_SendGoal.__import_type_support__()
            if _set_freedrive.Metaclass_SetFreedrive_GetResult._TYPE_SUPPORT is None:
                _set_freedrive.Metaclass_SetFreedrive_GetResult.__import_type_support__()
            if _set_freedrive.Metaclass_SetFreedrive_FeedbackMessage._TYPE_SUPPORT is None:
                _set_freedrive.Metaclass_SetFreedrive_FeedbackMessage.__import_type_support__()


class SetFreedrive(metaclass=Metaclass_SetFreedrive):

    # The goal message defined in the action definition.
    from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Goal as Goal
    # The result message defined in the action definition.
    from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Result as Result
    # The feedback message defined in the action definition.
    from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from ur_ros_rtde_msgs.action._set_freedrive import SetFreedrive_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
