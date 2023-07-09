#pragma once

#include "esphome/components/switch/switch.h"
#include "esphome/core/component.h"
#include "../taixia.h"

namespace esphome {
namespace taixia {
class TaiXia;
class TaiXiaSwitch : public switch_::Switch, public Component {
 public:
  void set_parent(TaiXia *parent) { this->parent_ = parent; };
  void set_service_id(uint8_t service_id) { this->service_id_ = service_id; };
  void set_sa_id(uint8_t sa_id) { this->sa_id_ = sa_id; };
  void dump_config() override;

 protected:
  void write_state(bool state) override;
  uint8_t service_id_;
  uint8_t sa_id_;

  TaiXia *parent_;
};

}  // namespace taixia
}  // namespace esphome
