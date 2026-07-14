#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to eli_common_interface__msg__RobotMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i8,

}

impl RobotMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: i8 = -2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_CONTROLLER: i8 = -1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DISCONNECTED: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONFIRM_SAFETY: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BOOTING: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_OFF: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_ON: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IDLE: i8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BACKDRIVE: i8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RUNNING: i8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UPDATING_FIRMWARE: i8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WAITING_CALIBRATION: i8 = 9;

}


impl Default for RobotMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotMode::default())
  }
}

impl rosidl_runtime_rs::Message for RobotMode {
  type RmwMsg = super::msg::rmw::RobotMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
    }
  }
}


// Corresponds to eli_common_interface__msg__TaskStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,

}

impl TaskStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: i8 = -1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STOPPED: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PAUSED: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLAYING: i8 = 2;

}


impl Default for TaskStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskStatus::default())
  }
}

impl rosidl_runtime_rs::Message for TaskStatus {
  type RmwMsg = super::msg::rmw::TaskStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}


// Corresponds to eli_common_interface__msg__SafetyMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafetyMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i8,

}

impl SafetyMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: i8 = -2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NORMAL: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REDUCED: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROTECTIVE_STOP: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RECOVERY: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SAFEGUARD_STOP: i8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_EMERGENCY_STOP: i8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT_EMERGENCY_STOP: i8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VIOLATION: i8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAULT: i8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VALIDATE_JOINT_ID: i8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNDEFINED_SAFETY_MODE: i8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTOMATIC_MODE_SAFEGUARD_STOP: i8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_THREE_POSITION_ENABLING_STOP: i8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TP_THREE_POSITION_ENABLING_STOP: i8 = 14;

}


impl Default for SafetyMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SafetyMode::default())
  }
}

impl rosidl_runtime_rs::Message for SafetyMode {
  type RmwMsg = super::msg::rmw::SafetyMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
    }
  }
}


// Corresponds to eli_common_interface__msg__Analog

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Analog {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,

}



impl Default for Analog {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Analog::default())
  }
}

impl rosidl_runtime_rs::Message for Analog {
  type RmwMsg = super::msg::rmw::Analog;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      value: msg.value,
    }
  }
}


// Corresponds to eli_common_interface__msg__IOState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IOState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_out: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub config_out: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tool_out: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_in: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub config_in: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tool_in: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_analog_out: Vec<super::msg::Analog>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_analog_in: Vec<super::msg::Analog>,

}



impl Default for IOState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IOState::default())
  }
}

impl rosidl_runtime_rs::Message for IOState {
  type RmwMsg = super::msg::rmw::IOState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        standard_out: msg.standard_out.into(),
        config_out: msg.config_out.into(),
        tool_out: msg.tool_out.into(),
        standard_in: msg.standard_in.into(),
        config_in: msg.config_in.into(),
        tool_in: msg.tool_in.into(),
        standard_analog_out: msg.standard_analog_out
          .into_iter()
          .map(|elem| super::msg::Analog::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        standard_analog_in: msg.standard_analog_in
          .into_iter()
          .map(|elem| super::msg::Analog::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        standard_out: msg.standard_out.as_slice().into(),
        config_out: msg.config_out.as_slice().into(),
        tool_out: msg.tool_out.as_slice().into(),
        standard_in: msg.standard_in.as_slice().into(),
        config_in: msg.config_in.as_slice().into(),
        tool_in: msg.tool_in.as_slice().into(),
        standard_analog_out: msg.standard_analog_out
          .iter()
          .map(|elem| super::msg::Analog::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        standard_analog_in: msg.standard_analog_in
          .iter()
          .map(|elem| super::msg::Analog::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      standard_out: msg.standard_out
          .into_iter()
          .collect(),
      config_out: msg.config_out
          .into_iter()
          .collect(),
      tool_out: msg.tool_out
          .into_iter()
          .collect(),
      standard_in: msg.standard_in
          .into_iter()
          .collect(),
      config_in: msg.config_in
          .into_iter()
          .collect(),
      tool_in: msg.tool_in
          .into_iter()
          .collect(),
      standard_analog_out: msg.standard_analog_out
          .into_iter()
          .map(super::msg::Analog::from_rmw_message)
          .collect(),
      standard_analog_in: msg.standard_analog_in
          .into_iter()
          .map(super::msg::Analog::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to eli_common_interface__msg__ToolData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_voltage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_input_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_input: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_output_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_output: f64,

}



impl Default for ToolData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ToolData::default())
  }
}

impl rosidl_runtime_rs::Message for ToolData {
  type RmwMsg = super::msg::rmw::ToolData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        output_voltage: msg.output_voltage,
        output_current: msg.output_current,
        temperature: msg.temperature,
        analog_input_type: msg.analog_input_type,
        analog_input: msg.analog_input,
        analog_output_type: msg.analog_output_type,
        analog_output: msg.analog_output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      output_voltage: msg.output_voltage,
      output_current: msg.output_current,
      temperature: msg.temperature,
      analog_input_type: msg.analog_input_type,
      analog_input: msg.analog_input,
      analog_output_type: msg.analog_output_type,
      analog_output: msg.analog_output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      output_voltage: msg.output_voltage,
      output_current: msg.output_current,
      temperature: msg.temperature,
      analog_input_type: msg.analog_input_type,
      analog_input: msg.analog_input,
      analog_output_type: msg.analog_output_type,
      analog_output: msg.analog_output,
    }
  }
}


