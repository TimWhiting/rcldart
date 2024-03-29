#ifndef _H_D7C06703178A5FD853D3BC72D70A11D0_SetParametersResult_DCPS_H_
#define _H_D7C06703178A5FD853D3BC72D70A11D0_SetParametersResult_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetParametersResult_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class SetParametersResult_TypeSupportInterface;

            typedef SetParametersResult_TypeSupportInterface * SetParametersResult_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetParametersResult_TypeSupportInterface> SetParametersResult_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetParametersResult_TypeSupportInterface> SetParametersResult_TypeSupportInterface_out;


            class SetParametersResult_DataWriter;

            typedef SetParametersResult_DataWriter * SetParametersResult_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetParametersResult_DataWriter> SetParametersResult_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetParametersResult_DataWriter> SetParametersResult_DataWriter_out;


            class SetParametersResult_DataReader;

            typedef SetParametersResult_DataReader * SetParametersResult_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetParametersResult_DataReader> SetParametersResult_DataReader_var;
            typedef DDS_DCPSInterface_out < SetParametersResult_DataReader> SetParametersResult_DataReader_out;


            class SetParametersResult_DataReaderView;

            typedef SetParametersResult_DataReaderView * SetParametersResult_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetParametersResult_DataReaderView> SetParametersResult_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetParametersResult_DataReaderView> SetParametersResult_DataReaderView_out;

            struct SetParametersResult_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetParametersResult_, struct SetParametersResult_Seq_uniq_> SetParametersResult_Seq;
            typedef DDS_DCPSSequence_var < SetParametersResult_Seq> SetParametersResult_Seq_var;
            typedef DDS_DCPSSequence_out < SetParametersResult_Seq> SetParametersResult_Seq_out;

            class  SetParametersResult_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetParametersResult_TypeSupportInterface_ptr _ptr_type;
                typedef SetParametersResult_TypeSupportInterface_var _var_type;

                static SetParametersResult_TypeSupportInterface_ptr _duplicate (SetParametersResult_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersResult_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersResult_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersResult_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersResult_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetParametersResult_TypeSupportInterface () {};
                ~SetParametersResult_TypeSupportInterface () {};
            private:
                SetParametersResult_TypeSupportInterface (const SetParametersResult_TypeSupportInterface &);
                SetParametersResult_TypeSupportInterface & operator = (const SetParametersResult_TypeSupportInterface &);
            };

            class  SetParametersResult_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetParametersResult_DataWriter_ptr _ptr_type;
                typedef SetParametersResult_DataWriter_var _var_type;

                static SetParametersResult_DataWriter_ptr _duplicate (SetParametersResult_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersResult_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersResult_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersResult_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersResult_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetParametersResult_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetParametersResult_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetParametersResult_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetParametersResult_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetParametersResult_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetParametersResult_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetParametersResult_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetParametersResult_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetParametersResult_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetParametersResult_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetParametersResult_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersResult_& instance_data) = 0;

            protected:
                SetParametersResult_DataWriter () {};
                ~SetParametersResult_DataWriter () {};
            private:
                SetParametersResult_DataWriter (const SetParametersResult_DataWriter &);
                SetParametersResult_DataWriter & operator = (const SetParametersResult_DataWriter &);
            };

            class  SetParametersResult_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetParametersResult_DataReader_ptr _ptr_type;
                typedef SetParametersResult_DataReader_var _var_type;

                static SetParametersResult_DataReader_ptr _duplicate (SetParametersResult_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersResult_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersResult_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersResult_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersResult_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParametersResult_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParametersResult_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParametersResult_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersResult_& instance) = 0;

            protected:
                SetParametersResult_DataReader () {};
                ~SetParametersResult_DataReader () {};
            private:
                SetParametersResult_DataReader (const SetParametersResult_DataReader &);
                SetParametersResult_DataReader & operator = (const SetParametersResult_DataReader &);
            };

            class  SetParametersResult_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetParametersResult_DataReaderView_ptr _ptr_type;
                typedef SetParametersResult_DataReaderView_var _var_type;

                static SetParametersResult_DataReaderView_ptr _duplicate (SetParametersResult_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParametersResult_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetParametersResult_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParametersResult_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParametersResult_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParametersResult_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParametersResult_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParametersResult_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParametersResult_& instance) = 0;

            protected:
                SetParametersResult_DataReaderView () {};
                ~SetParametersResult_DataReaderView () {};
            private:
                SetParametersResult_DataReaderView (const SetParametersResult_DataReaderView &);
                SetParametersResult_DataReaderView & operator = (const SetParametersResult_DataReaderView &);
            };
        }

    }

}

#endif
