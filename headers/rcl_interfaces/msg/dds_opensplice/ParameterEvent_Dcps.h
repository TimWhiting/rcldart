#ifndef _H_4371E2BA6CE8EC324EB1DBBE0228ABB2_ParameterEvent_DCPS_H_
#define _H_4371E2BA6CE8EC324EB1DBBE0228ABB2_ParameterEvent_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ParameterEvent_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class ParameterEvent_TypeSupportInterface;

            typedef ParameterEvent_TypeSupportInterface * ParameterEvent_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ParameterEvent_TypeSupportInterface> ParameterEvent_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ParameterEvent_TypeSupportInterface> ParameterEvent_TypeSupportInterface_out;


            class ParameterEvent_DataWriter;

            typedef ParameterEvent_DataWriter * ParameterEvent_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ParameterEvent_DataWriter> ParameterEvent_DataWriter_var;
            typedef DDS_DCPSInterface_out < ParameterEvent_DataWriter> ParameterEvent_DataWriter_out;


            class ParameterEvent_DataReader;

            typedef ParameterEvent_DataReader * ParameterEvent_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ParameterEvent_DataReader> ParameterEvent_DataReader_var;
            typedef DDS_DCPSInterface_out < ParameterEvent_DataReader> ParameterEvent_DataReader_out;


            class ParameterEvent_DataReaderView;

            typedef ParameterEvent_DataReaderView * ParameterEvent_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ParameterEvent_DataReaderView> ParameterEvent_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ParameterEvent_DataReaderView> ParameterEvent_DataReaderView_out;

            struct ParameterEvent_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ParameterEvent_, struct ParameterEvent_Seq_uniq_> ParameterEvent_Seq;
            typedef DDS_DCPSSequence_var < ParameterEvent_Seq> ParameterEvent_Seq_var;
            typedef DDS_DCPSSequence_out < ParameterEvent_Seq> ParameterEvent_Seq_out;

            class  ParameterEvent_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ParameterEvent_TypeSupportInterface_ptr _ptr_type;
                typedef ParameterEvent_TypeSupportInterface_var _var_type;

                static ParameterEvent_TypeSupportInterface_ptr _duplicate (ParameterEvent_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterEvent_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ParameterEvent_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterEvent_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterEvent_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ParameterEvent_TypeSupportInterface () {};
                ~ParameterEvent_TypeSupportInterface () {};
            private:
                ParameterEvent_TypeSupportInterface (const ParameterEvent_TypeSupportInterface &);
                ParameterEvent_TypeSupportInterface & operator = (const ParameterEvent_TypeSupportInterface &);
            };

            class  ParameterEvent_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ParameterEvent_DataWriter_ptr _ptr_type;
                typedef ParameterEvent_DataWriter_var _var_type;

                static ParameterEvent_DataWriter_ptr _duplicate (ParameterEvent_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterEvent_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ParameterEvent_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterEvent_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterEvent_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ParameterEvent_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ParameterEvent_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ParameterEvent_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ParameterEvent_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ParameterEvent_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ParameterEvent_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ParameterEvent_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ParameterEvent_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ParameterEvent_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ParameterEvent_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ParameterEvent_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterEvent_& instance_data) = 0;

            protected:
                ParameterEvent_DataWriter () {};
                ~ParameterEvent_DataWriter () {};
            private:
                ParameterEvent_DataWriter (const ParameterEvent_DataWriter &);
                ParameterEvent_DataWriter & operator = (const ParameterEvent_DataWriter &);
            };

            class  ParameterEvent_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ParameterEvent_DataReader_ptr _ptr_type;
                typedef ParameterEvent_DataReader_var _var_type;

                static ParameterEvent_DataReader_ptr _duplicate (ParameterEvent_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterEvent_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ParameterEvent_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterEvent_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterEvent_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterEvent_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterEvent_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterEvent_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterEvent_& instance) = 0;

            protected:
                ParameterEvent_DataReader () {};
                ~ParameterEvent_DataReader () {};
            private:
                ParameterEvent_DataReader (const ParameterEvent_DataReader &);
                ParameterEvent_DataReader & operator = (const ParameterEvent_DataReader &);
            };

            class  ParameterEvent_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ParameterEvent_DataReaderView_ptr _ptr_type;
                typedef ParameterEvent_DataReaderView_var _var_type;

                static ParameterEvent_DataReaderView_ptr _duplicate (ParameterEvent_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterEvent_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ParameterEvent_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterEvent_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterEvent_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterEvent_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterEvent_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterEvent_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterEvent_& instance) = 0;

            protected:
                ParameterEvent_DataReaderView () {};
                ~ParameterEvent_DataReaderView () {};
            private:
                ParameterEvent_DataReaderView (const ParameterEvent_DataReaderView &);
                ParameterEvent_DataReaderView & operator = (const ParameterEvent_DataReaderView &);
            };
        }

    }

}

#endif
