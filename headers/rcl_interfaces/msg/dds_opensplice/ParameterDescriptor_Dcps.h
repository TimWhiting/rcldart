#ifndef _H_F15EC4838A259565FE70A124EE9FD8A9_ParameterDescriptor_DCPS_H_
#define _H_F15EC4838A259565FE70A124EE9FD8A9_ParameterDescriptor_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ParameterDescriptor_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class ParameterDescriptor_TypeSupportInterface;

            typedef ParameterDescriptor_TypeSupportInterface * ParameterDescriptor_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ParameterDescriptor_TypeSupportInterface> ParameterDescriptor_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ParameterDescriptor_TypeSupportInterface> ParameterDescriptor_TypeSupportInterface_out;


            class ParameterDescriptor_DataWriter;

            typedef ParameterDescriptor_DataWriter * ParameterDescriptor_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ParameterDescriptor_DataWriter> ParameterDescriptor_DataWriter_var;
            typedef DDS_DCPSInterface_out < ParameterDescriptor_DataWriter> ParameterDescriptor_DataWriter_out;


            class ParameterDescriptor_DataReader;

            typedef ParameterDescriptor_DataReader * ParameterDescriptor_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ParameterDescriptor_DataReader> ParameterDescriptor_DataReader_var;
            typedef DDS_DCPSInterface_out < ParameterDescriptor_DataReader> ParameterDescriptor_DataReader_out;


            class ParameterDescriptor_DataReaderView;

            typedef ParameterDescriptor_DataReaderView * ParameterDescriptor_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ParameterDescriptor_DataReaderView> ParameterDescriptor_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ParameterDescriptor_DataReaderView> ParameterDescriptor_DataReaderView_out;

            struct ParameterDescriptor_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ParameterDescriptor_, struct ParameterDescriptor_Seq_uniq_> ParameterDescriptor_Seq;
            typedef DDS_DCPSSequence_var < ParameterDescriptor_Seq> ParameterDescriptor_Seq_var;
            typedef DDS_DCPSSequence_out < ParameterDescriptor_Seq> ParameterDescriptor_Seq_out;

            class  ParameterDescriptor_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ParameterDescriptor_TypeSupportInterface_ptr _ptr_type;
                typedef ParameterDescriptor_TypeSupportInterface_var _var_type;

                static ParameterDescriptor_TypeSupportInterface_ptr _duplicate (ParameterDescriptor_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterDescriptor_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ParameterDescriptor_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterDescriptor_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterDescriptor_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ParameterDescriptor_TypeSupportInterface () {};
                ~ParameterDescriptor_TypeSupportInterface () {};
            private:
                ParameterDescriptor_TypeSupportInterface (const ParameterDescriptor_TypeSupportInterface &);
                ParameterDescriptor_TypeSupportInterface & operator = (const ParameterDescriptor_TypeSupportInterface &);
            };

            class  ParameterDescriptor_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ParameterDescriptor_DataWriter_ptr _ptr_type;
                typedef ParameterDescriptor_DataWriter_var _var_type;

                static ParameterDescriptor_DataWriter_ptr _duplicate (ParameterDescriptor_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterDescriptor_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ParameterDescriptor_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterDescriptor_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterDescriptor_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ParameterDescriptor_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ParameterDescriptor_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ParameterDescriptor_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ParameterDescriptor_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ParameterDescriptor_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ParameterDescriptor_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ParameterDescriptor_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ParameterDescriptor_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ParameterDescriptor_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ParameterDescriptor_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ParameterDescriptor_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterDescriptor_& instance_data) = 0;

            protected:
                ParameterDescriptor_DataWriter () {};
                ~ParameterDescriptor_DataWriter () {};
            private:
                ParameterDescriptor_DataWriter (const ParameterDescriptor_DataWriter &);
                ParameterDescriptor_DataWriter & operator = (const ParameterDescriptor_DataWriter &);
            };

            class  ParameterDescriptor_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ParameterDescriptor_DataReader_ptr _ptr_type;
                typedef ParameterDescriptor_DataReader_var _var_type;

                static ParameterDescriptor_DataReader_ptr _duplicate (ParameterDescriptor_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterDescriptor_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ParameterDescriptor_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterDescriptor_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterDescriptor_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterDescriptor_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterDescriptor_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterDescriptor_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterDescriptor_& instance) = 0;

            protected:
                ParameterDescriptor_DataReader () {};
                ~ParameterDescriptor_DataReader () {};
            private:
                ParameterDescriptor_DataReader (const ParameterDescriptor_DataReader &);
                ParameterDescriptor_DataReader & operator = (const ParameterDescriptor_DataReader &);
            };

            class  ParameterDescriptor_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ParameterDescriptor_DataReaderView_ptr _ptr_type;
                typedef ParameterDescriptor_DataReaderView_var _var_type;

                static ParameterDescriptor_DataReaderView_ptr _duplicate (ParameterDescriptor_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterDescriptor_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ParameterDescriptor_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterDescriptor_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterDescriptor_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterDescriptor_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterDescriptor_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterDescriptor_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterDescriptor_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterDescriptor_& instance) = 0;

            protected:
                ParameterDescriptor_DataReaderView () {};
                ~ParameterDescriptor_DataReaderView () {};
            private:
                ParameterDescriptor_DataReaderView (const ParameterDescriptor_DataReaderView &);
                ParameterDescriptor_DataReaderView & operator = (const ParameterDescriptor_DataReaderView &);
            };
        }

    }

}

#endif
