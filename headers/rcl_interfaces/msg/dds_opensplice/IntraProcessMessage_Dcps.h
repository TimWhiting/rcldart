#ifndef _H_77AE9705C225590CDB92A827880FF753_IntraProcessMessage_DCPS_H_
#define _H_77AE9705C225590CDB92A827880FF753_IntraProcessMessage_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "IntraProcessMessage_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class IntraProcessMessage_TypeSupportInterface;

            typedef IntraProcessMessage_TypeSupportInterface * IntraProcessMessage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < IntraProcessMessage_TypeSupportInterface> IntraProcessMessage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < IntraProcessMessage_TypeSupportInterface> IntraProcessMessage_TypeSupportInterface_out;


            class IntraProcessMessage_DataWriter;

            typedef IntraProcessMessage_DataWriter * IntraProcessMessage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < IntraProcessMessage_DataWriter> IntraProcessMessage_DataWriter_var;
            typedef DDS_DCPSInterface_out < IntraProcessMessage_DataWriter> IntraProcessMessage_DataWriter_out;


            class IntraProcessMessage_DataReader;

            typedef IntraProcessMessage_DataReader * IntraProcessMessage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < IntraProcessMessage_DataReader> IntraProcessMessage_DataReader_var;
            typedef DDS_DCPSInterface_out < IntraProcessMessage_DataReader> IntraProcessMessage_DataReader_out;


            class IntraProcessMessage_DataReaderView;

            typedef IntraProcessMessage_DataReaderView * IntraProcessMessage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < IntraProcessMessage_DataReaderView> IntraProcessMessage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < IntraProcessMessage_DataReaderView> IntraProcessMessage_DataReaderView_out;

            struct IntraProcessMessage_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < IntraProcessMessage_, struct IntraProcessMessage_Seq_uniq_> IntraProcessMessage_Seq;
            typedef DDS_DCPSSequence_var < IntraProcessMessage_Seq> IntraProcessMessage_Seq_var;
            typedef DDS_DCPSSequence_out < IntraProcessMessage_Seq> IntraProcessMessage_Seq_out;

            class  IntraProcessMessage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef IntraProcessMessage_TypeSupportInterface_ptr _ptr_type;
                typedef IntraProcessMessage_TypeSupportInterface_var _var_type;

                static IntraProcessMessage_TypeSupportInterface_ptr _duplicate (IntraProcessMessage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static IntraProcessMessage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static IntraProcessMessage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static IntraProcessMessage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                IntraProcessMessage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                IntraProcessMessage_TypeSupportInterface () {};
                ~IntraProcessMessage_TypeSupportInterface () {};
            private:
                IntraProcessMessage_TypeSupportInterface (const IntraProcessMessage_TypeSupportInterface &);
                IntraProcessMessage_TypeSupportInterface & operator = (const IntraProcessMessage_TypeSupportInterface &);
            };

            class  IntraProcessMessage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef IntraProcessMessage_DataWriter_ptr _ptr_type;
                typedef IntraProcessMessage_DataWriter_var _var_type;

                static IntraProcessMessage_DataWriter_ptr _duplicate (IntraProcessMessage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static IntraProcessMessage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static IntraProcessMessage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static IntraProcessMessage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                IntraProcessMessage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const IntraProcessMessage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const IntraProcessMessage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const IntraProcessMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const IntraProcessMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const IntraProcessMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const IntraProcessMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const IntraProcessMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const IntraProcessMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const IntraProcessMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const IntraProcessMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (IntraProcessMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const IntraProcessMessage_& instance_data) = 0;

            protected:
                IntraProcessMessage_DataWriter () {};
                ~IntraProcessMessage_DataWriter () {};
            private:
                IntraProcessMessage_DataWriter (const IntraProcessMessage_DataWriter &);
                IntraProcessMessage_DataWriter & operator = (const IntraProcessMessage_DataWriter &);
            };

            class  IntraProcessMessage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef IntraProcessMessage_DataReader_ptr _ptr_type;
                typedef IntraProcessMessage_DataReader_var _var_type;

                static IntraProcessMessage_DataReader_ptr _duplicate (IntraProcessMessage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static IntraProcessMessage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static IntraProcessMessage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static IntraProcessMessage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                IntraProcessMessage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (IntraProcessMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (IntraProcessMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (IntraProcessMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const IntraProcessMessage_& instance) = 0;

            protected:
                IntraProcessMessage_DataReader () {};
                ~IntraProcessMessage_DataReader () {};
            private:
                IntraProcessMessage_DataReader (const IntraProcessMessage_DataReader &);
                IntraProcessMessage_DataReader & operator = (const IntraProcessMessage_DataReader &);
            };

            class  IntraProcessMessage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef IntraProcessMessage_DataReaderView_ptr _ptr_type;
                typedef IntraProcessMessage_DataReaderView_var _var_type;

                static IntraProcessMessage_DataReaderView_ptr _duplicate (IntraProcessMessage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static IntraProcessMessage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static IntraProcessMessage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static IntraProcessMessage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                IntraProcessMessage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (IntraProcessMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (IntraProcessMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (IntraProcessMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (IntraProcessMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const IntraProcessMessage_& instance) = 0;

            protected:
                IntraProcessMessage_DataReaderView () {};
                ~IntraProcessMessage_DataReaderView () {};
            private:
                IntraProcessMessage_DataReaderView (const IntraProcessMessage_DataReaderView &);
                IntraProcessMessage_DataReaderView & operator = (const IntraProcessMessage_DataReaderView &);
            };
        }

    }

}

#endif
