#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>

//用eosio命名空间
using namespace eosio;

//所有的智能合约都继承自contract类
class hello : public eosio::contract {

  public:
      using contract::contract;

      /// @abi action
      void hi( account_name user ) {
         print( "Hello, ", name{user} );
      }

};
EOSIO_ABI( hello, (hi) )
